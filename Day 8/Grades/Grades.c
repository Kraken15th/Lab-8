// Grades Print
float * EnterGrade(){
float * grades = malloc(4*5);
for(int i = 0; i<5; i++)
{
grades[i]= (i + 1);
}
return grades;
}
PrintGrade(float * p){

for(int i=0; i<5; i++)
{
print("%f", p[i]);
}
free(p);
}
main(){
// Reserve Place

float * grades;
grades = EnterGrade();
PrintGrade(grades);
}
