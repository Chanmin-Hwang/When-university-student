#2
plot(pressure~temperature,data=pressure)
cor(pressure$temperature,pressure$pressure)

#3
pairs(state.x77[,c(1,2,3,8)])

#6
성적 <- c(77.5,60,50,95,55,85,72.5,80,92.5,87.5)
TV_시청시간 <- c(14,10,20,7,25,9,15,13,4,21)
plot(성적 ,TV_시청시간)
cor(성적,TV_시청시간)

#9
year1 <- c(20141,20151,20152,20153,20154,20161,20162,20163,20164,20171,20172,20173)
men1 <- c(73.9,73.1,74.4,74.2,73.5,73,74.2,74.5,73.8,73.1,74.5,74.2)
women1 <- c(51.4,50.5,52.4,52.4,51.9,50.9,52.6,52.7,52.2,51.5,53.2,53.1)


plot(men1~year1,type='l',col='blue',ylim=c(50,80))
lines(women1~year1,col='red')


#11
point <- as.integer(Orange$Tree)
color <- c("red",'blue','green','black')

pairs(Orange[,2:3],col = color[point])

#12
#1
library(mlbench)
data('Glass')
myds <- Glass

#2
pairs(myds[,-10])

#3
cor(myds[,-10])

#4
point <- as.numeric(myds$Type)
color <- c('red','blue','yellow','green','purple','black')

pairs(myds[,-10],col = color[point])

#15
year1949 <- c(112, 118, 132, 129, 121, 135, 148, 148, 136, 119, 104, 118)
year1955 <- c(242, 233, 267, 269, 270, 315, 364, 347, 312, 274, 237, 278)
year1960 <- c(417, 391, 419, 461, 472, 535, 622, 606, 508, 461, 390, 432)

plot(1:12,year1949,type='l',main='statistic',ylim=c(100,700))
lines(1:12,year1955,col='red')
lines(1:12,year1960,col='blue')

#16
year1973 <- c(9007,  8106 , 8928  ,9137 ,10017 ,10826 ,11317 ,10744  ,9713  ,9938 , 9161  ,8927)
year1975 <- c(8162,  7306,  8124,  7870,  9387,  9556, 10093,  9620,  8285,  8466,  8160,  8034)
year1977 <- c(7792,  6957,  7726,  8106,  8890,  9299, 10625,  9302,  8314,  8850,  8265  ,8796)

plot(1:12,year1973,type='l',col='red',ylim=c(6000,12000))
lines(1:12,year1975,col='blue')
lines(1:12,year1977,col='yellow')

