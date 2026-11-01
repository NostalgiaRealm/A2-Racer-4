
/* ==== FUN_0054ca8b @ 0054ca8b ==== 
 * signature: int __thiscall FUN_0054ca8b(void * this, uint param_1, char param_2)
 * body: 0054ca8b-0054cac9
 */

int __thiscall FUN_0054ca8b(void *this,uint param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_1 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (((iVar2 == 0) && (param_2 != '\0')) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_1 < *(uint *)(DAT_0074daf8 + 0xc)) {
      iVar2 = *(int *)(*(int *)(DAT_0074daf8 + 8) + param_1 * 4);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


