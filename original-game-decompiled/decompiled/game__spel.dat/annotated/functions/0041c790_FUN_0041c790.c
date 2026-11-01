
/* ==== FUN_0041c790 @ 0041c790 ==== 
 * signature: bool __fastcall FUN_0041c790(int param_1)
 * body: 0041c790-0041c7be
 */

bool __fastcall FUN_0041c790(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) < 0) {
    return false;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4);
  if (iVar1 < 0) {
    return false;
  }
  iVar1 = FUN_0049eb50(&DAT_006fbb5c,iVar1);
  uVar2 = FUN_0049e630(iVar1);
  return uVar2 != 0;
}


