// Start a simple Spark Session
import org.apache.spark.sql.SparkSession
val spark = SparkSession.builder().getOrCreate()

// Grab small dataset with some missing data
val df = spark.read.option("header","true").option("inferSchema","true").csv("ContainsNull.csv")

// Show schema
df.printSchema()

// Notice the missing values!
df.show()

// Remove values
df.na.drop().show()
df.na.drop(2).show()

// Fill values
df.na.fill(100).show()
df.na.fill("Missing name").show()
df.na.fill("Missing name",Array("Name")).show()
