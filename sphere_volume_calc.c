#include <stdio.h>
#define G_COEFFICIENCY (4.0f / 3.0f)
#define PI 3.14159

int main(void)
{

  int radius;
  float volume;

  printf("What is the radius of the sphere? ");
  scanf("%d", &radius);

  volume = (G_COEFFICIENCY) * PI * (radius * radius * radius);

  printf("The volume for the sphere is (units cubed): %.2f\n", volume);

  return 0;

}