#2
#1
library(treemap)
colnames(swiss)

edu <- c()
for(i in 1:nrow(swiss)){
  if(swiss[i,"Education"]<=6){
    edu[i] <- "LOW"
  }else if(swiss[i,"Education"]>=13){
    edu[i] <- "HIGH"
  }else{
    edu[i] <- "MID"
  }
}

myds <- data.frame(swiss,edu,stname=rownames(swiss))
treemap(dtf=myds,index=c("edu","stname"),type="value",vSize="Fertility",vColor="Agriculture")

#2
treemap(dtf=myds,index='stname',type='value',vColor='Examination',vSize="Catholic")

#3
symbols(x = swiss$Fertility, y = swiss$Agriculture, xlab = 'Fertility', 
        ylab='Agriculture', circles = swiss$Education, bg = 'green')
text(x = swiss$Fertility, y = swiss$Agriculture, labels = rownames(swiss))

#6
santa <- data.frame(belief=c('no belief','no belief','no belief','no belief',
                             'belief','belief','belief','belief',
                             'belief','belief','no belief','no belief',
                             'belief','belief','no belief','no belief'),
                    sibling = c('older brother','older brother',
                                'older brother','older sister',
                                'no older sibling','no older sibling',
                                'no older sibling','older sister',
                                'older brother','older sister',
                                'older brother','older sister',
                                'no older sibling','older sister',
                                'older brother','no older sibling')
                    )
mosaicplot(~belief+sibling,data = santa,color = c('red','green','blue'))


#7
colnames(mtcars)
library(ggplot2)
ggplot(mtcars, aes(x = gear)) + geom_bar() + labs(x = '기어의 수', y = '빈도수',main='기어의 수')

#10
ggplot(trees, aes(x = Girth)) + geom_histogram(binwidth = 3.0, fill = "steelblue") +
  labs(x = "나무 둘레",y = '빈도',main='히스토그램')

#11
points <- as.integer(mtcars$gear)
color <- c('red','green','blue')
ggplot(mtcars,aes(x = mpg,y=wt))+geom_point(size=2,colour = color[points-2])

#12
colnames(mtcars)
ggplot(data = mtcars,aes(y=mpg, fill=factor(mtcars$cyl))) + geom_boxplot()

#13
df <- data.frame(year = c(2015:2026),
                 total = c(51014,51245,51446,51635,51811,51973,
                                    52123,52261,52388,52504,52609,52704))

ggplot(data = df,aes(x=year,y=total)) + geom_line()
