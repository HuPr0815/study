#define MaxSize 100
typedef char ElemType;
typedef struct
{
  ElemType elem[MaxSize];
  int top; /*栈指针*/
} SqStack;
void InitStack(SqStack *&s)
{
  s = (SqStack *)malloc(sizeof(SqStack));
  s->top = -1;
}
int Push(SqStack *&s, ElemType e)
{
  if (s->top == MaxSize - 1)
    return 0;
  s->top++;
  s->elem[s->top] = e;
  return 1;
}
int Pop(SqStack *&s, ElemType &e)
{
  if (s->top == -1)
    return 0;
  e = s->elem[s->top];
  s->top--;
  return 1;
}