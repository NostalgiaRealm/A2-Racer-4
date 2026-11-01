
/* ==== FUN_0054c45e @ 0054c45e ==== 
 * signature: int __thiscall FUN_0054c45e(void * this, int * param_1, int param_2)
 * body: 0054c45e-0054c48b
 */

int __thiscall FUN_0054c45e(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(FILE **)((int)this + 0x50) == (FILE *)0x0) ||
     (iVar1 = FUN_0055a502(*(FILE **)((int)this + 0x50),param_1,0,param_2 * 2), iVar1 != 0)) {
    this = (void *)0x0;
  }
  return (int)this;
}


