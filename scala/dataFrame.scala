import org.apache.spark.sql.SparkSession
val spark = SparkSession.builder().getOrCreate()
val df = spark.read.option("header","true").option("inferSchema","true").csv("CitiGroup2006_2008")
df.printSchema()

// Show DataFrame
// df.head(5)
// for(row <- df.head(5)){
//   println(row)
// }
// //df.columns
// //df.describe().show()
// //df.select("Volume")
// //df.select($"Date",$"Close").show()
//
// // Add column
// df.withColumn("Name",df("High")+df("Low"))
// df.printSchema()
//
// // Rename
// df("High").as("tg")


// Operation on DataFrame
// import spark.implicits._
// df.filter($"Close"<480).show()
// df.filter("Close < 480").show()
// df.filter($"Close"<480 && $"High"<480).show()
// df.filter("Close < 480 AND High <480").show()
// val CH_lwo = df.filter("Close < 480 AND High <480").collect() //an array now
// val CH_lwo = df.filter("Close < 480 AND High <480").count()
// df.filter($"Close"===480).show()
// df.filter("Close = 480").show()

// df.select(corr("High", "Low")).show() //correlation
