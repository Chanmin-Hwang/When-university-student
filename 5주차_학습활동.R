#3
i <- 1
while(i<=9){
  cat('8*',i,'=',8*i,'\n')
  i <- i+1
}

#5
i <- 2
while(i<=1000){
  k <- 2
  flag <- T
  while(k<i){
    if(i%%k == 0) {
      flag <- F
    }
    k <- k+1
  }
  if(flag) print(i)
  i <- i+1
}

#7
#1
apply(iris[,1:4],1,sum)

#2
apply(iris[,1:4],2,max)

#8
#1
apply(mtcars,2,sum)

#2
apply(mtcars,2,max)

#3
apply(mtcars,2,sd)

#10
maxmin <- function(x = c()){
  return(list(max = max(x),min = min(x)))
}

v1 <- c(7,1,2,8,9)
result <- maxmin(v1)
result$max
result$min

#12
#1
iris[which.max(iris$Petal.Length),]

#2
iris[which(iris$Petal.Width >= 0.3 & iris$Petal.Width <= 0.4),]
