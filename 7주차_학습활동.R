#3
#1
season <- c('여름','겨울','봄','가을','여름','가을','겨울','여름','여름','가을')

#2
table(season)

#3
barplot(table(season))

#4
pie(table(season))

#5
#1
x <- mtcars$wt
mean(x)
median(x)
mean(x,trim = 0.15)
sd(x)

#2
summary(x)

#3
table(mtcars$cyl)

#4
barplot(table(mtcars$cyl))

#5
hist(x)

#6
boxplot(x)
boxplot.stats(x)

#7
boxplot(mtcars$disp)
boxplot.stats(mtcars$disp)

#8


#6
#1
head(trees)

#2
y <- trees$Girth
mean(y)
median(y)
mean(y,trim=0.15)
sd(y)

#3
hist(y)

#4
boxplot(y)

#5
z <- trees$Height
mean(z)
median(z)
mean(z,trim=0.15)
sd(z)

#6
hist(z)

#7
boxplot(z)

#7
#1
head(Orange)

#2
p <- Orange$age
mean(p)
median(p)
mean(p,trim=0.15)
sd(p)

#3
hist(p)

#4
boxplot(age~Tree,data = Orange)

#5
df <- Orange[!(Orange$Tree == 2),]
q <- df$circumference
mean(q)
median(q)
mean(q,trim=0.15)
sd(q)

#6
hist(q)

#7
boxplot(Orange$circumference~Orange$Tree)
