
/* ==== FUN_004d0930 @ 004d0930 ==== 
 * signature: int __thiscall FUN_004d0930(void * this, int * param_1, uint param_2)
 * body: 004d0930-004d095e
 */

int __thiscall FUN_004d0930(void *this,int *param_1,uint param_2)

{
  int iVar1;
  
  if (*(FILE **)((int)this + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_0055a502(*(FILE **)((int)this + 0x50),param_1,0,param_2);
    if (iVar1 == 0) {
      return (int)this;
    }
  }
  return 0;
}


