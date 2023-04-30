#3
#1
class(mtcars)

#2
dim(mtcars)

#3
class(mtcars[,1:11])

#5
mtcars[mtcars == max(mtcars[,1]),]

#6
set <- mtcars[mtcars$gear == 4,]
mtcars[mtcars == min(set[,1]),]

#7
mtcars["Honda Civic",c(1,10)]

#8
a <- mtcars["Pontiac Firebird",1]
mtcars[mtcars$mpg > a,]

#9
mean(mtcars[rownames(mtcars),1])

#10
table(mtcars[,10])

#4
#1
class(airquality)

#2
head(airquality)

#3
airquality[airquality$Temp == max(airquality$Temp),c(5,6)]

#4
set <- subset(airquality, Month == 6)
set[set$Wind == max(set$Wind),]

max(airquality[airquality$Month==6,3])

#5
mean(airquality[airquality$Month == 7,4])

#6
set1 <- subset(airquality,Month == 5)
set1
set2 <- subset(set1,Ozone >= 0)
set2
mean(set2$Ozone)

#7
count(airquality[airquality$Ozone > 100,])
table(airquality$Ozone > 100)
#5
#1
str(swiss)

#2
swiss[swiss$Agriculture == max(swiss$Agriculture),]

#3
set <- subset(swiss,sort())

#4
set <- swiss[swiss$Catholic >= 80,]
set[,"Agriculture"]

#5
swiss[swiss$Examination < 20 & swiss$Agriculture < 50,c(2,3)]