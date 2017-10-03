// DATAFRAME PROJECT
// Use the Netflix_2011_2016.csv file to Answer and complete
// the commented tasks below!

// Start a simple Spark Session

// Load the Netflix Stock CSV File, have Spark infer the data types.
import org.apache.spark.sql.SparkSession
val spark = SparkSession.builder().getOrCreate()
val df = spark.read.option("header","true").option("inferSchema","true").csv("Netflix_2011_2016.csv")

// Create a DataFrame from Spark Session read csv
// Technically known as class Dataset

// Show Schema
df.printSchema()

// What are the column names?
df.columns

// What does the Schema look like?
df.printSchema()

// Print out the first 5 columns.
df.head(5)

// Use describe() to learn about the DataFrame.
df.describe().show()

// Create a new dataframe with a column called HV Ratio that
// is the ratio of the High Price versus volume of stock traded
// for a day.
val df2 = df.withColumn("HV Ratio",df("High")/df("Volume"))

// What day had the Peak High in Price?
df.select(max("High")).show()

// What is the mean of the Close column?
df.select(mean("Close")).show(

// What is the max and min of the Volume column?
df.select(max("Volume")).show()
df.select(min("Volume")).show()

// For Scala/Spark $ Syntax

// How many days was the Close lower than $ 600?
df.filter($"Close"<600).show()

// What percentage of the time was the High greater than $500 ?
df.filter($"High">500).show()

// What is the Pearson correlation between High and Volume?
df.select(corr("High","Volume")).show()

// What is the max High per year?
// Practical Example
val df2 = df.withColumn("Year",year(df("Date")))
val dfavgs = df2.groupBy("Year").mean()
dfavgs.select($"Year",$"avg(High)").show()


// What is the average Close for each Calender Month?
val df3 = df.withColumn("Year",month(df("Date")))
val dfavgs3 = df3.groupBy("Year").mean()
dfavgs3.select($"Year",$"avg(Close)").orderBy("Year").show()
