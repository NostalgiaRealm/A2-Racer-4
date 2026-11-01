
/* ==== FUN_0054caca @ 0054caca ==== 
 * signature: int __fastcall FUN_0054caca(int * param_1)
 * body: 0054caca-0054cae9
 */

int __fastcall FUN_0054caca(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *param_1;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != DAT_0074daf4) &&
     ((*(char *)(iVar1 + 0x14) == '\0' || (DAT_0074daf8 != DAT_0074daf4)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


