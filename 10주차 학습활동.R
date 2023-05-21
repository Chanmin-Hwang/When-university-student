#1
str(state.x77)
ds <- data.frame(state.x77)
head(ds)
ds[2,3] <- NA; ds[3,1] <- NA; ds[2,4] <- NA; ds[4,3] <- NA

#1 
colSums(is.na(ds))

#2
rowSums(is.na(ds))

#3
sum(rowSums(is.na(ds))>0)

#4
ds.new <- ds[complete.cases(ds),]
ds.new

# 2
st <- data.frame(state.x77)
str(st)
head(st)

#1
boxplot(st)

#2
st_pop<- boxplot.stats(st$Population)$out
st$Population[st$Population %in% st_pop] <- NA
st_in<- boxplot.stats(st$Income)$out
st$Income[st$Income %in% st_in] <- NA
st_ar<- boxplot.stats(st$Area)$out
st$Area[st$Area %in% st_ar] <- NA
st

#3
st2 <- st[complete.cases(st),]
st2


#4
str(state.x77)
st<- data.frame(state.x77)
head(st)

#1 
st[order(st$Population), ] 

#2
st[order(st$Income, decreasing=T), ]

#3
st3 <- st[order(st$Illiteracy),]
head(st3,10)

#7
#1
library(mlbench)
data("Ionosphere")
myds <- Ionosphere

#2
aggregate(x=myds[,3:10],by=myds[,c(35,1)],FUN = sd)

#9
set.seed(100)
spcs <- levels(iris[,5])
iris.10 <- data.frame()

for (i in 1:length(spcs)){
  set.seed(100)
  if(i==1){
    iris.10 <- subset(iris,Species==spcs[i])[sample(1:50,size=10,replace = F),]
  }else{
    iiris.10 <- rbind(iris.10,subset(iris,Species==spcs[i])[sample(1:50,size=10,replace = F),])
  }
}

iris.10

#12
color <- c("red","green","blue",'black','yellow')[combn(5,3)]

for (i in 1:(length(color)/3)){
  cat(color[3*i-2],color[3*i-1],color[3*i],"\n")
}

#13
subset(x=state.x77,subset = state.x77[,"Area"]>state.x77["Alabama","Area"]
       & state.x77[,"Area"] < state.x77["California","Area"],select=c("Population","Income","Area"))

#15
#1
authors <- data.frame(
  surname=c("Twein","Venables",'Tierney','Ripley','McNeil'),
  nationality = c("US",'Australia','US','UK','Austrailia'),
  retired = c("yes",rep("no",4))
)
books <- data.frame(
  name = c('Johns','Venables','Tierney','Ripley','Ripley','McNeil'),
  title=c('Exploratory Data Analysis','Modern Applied Statistics...','LISP-STA',
          'Spatial Statistics','Stochastic Simulation','Interactive Data Analysis'),
  other.author = c(NA,'Ripley',NA,NA,NA,NA)
)

#2
merge(x=authors,y=books,by.x = 'surname',by.y='name')

#3
merge(authors,books,by.x='surname',by.y='name',all.x=T)

#4
merge(authors,books,by.x='surname',by.y='name',all.y=T)

#5
merge(authors,books,by.x='surname',by.y='other.author')
