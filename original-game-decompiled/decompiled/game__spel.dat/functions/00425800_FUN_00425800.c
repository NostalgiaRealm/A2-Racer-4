
/* ==== FUN_00425800 @ 00425800 ==== 
 * signature: undefined __stdcall FUN_00425800(int param_1)
 * body: 00425800-0042584c
 */

void FUN_00425800(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00558625();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  iVar2 = FUN_00450900((&PTR_s_DAMAGE_GLASS_00595cdc)[uVar1]);
  iVar3 = FUN_0049eb50(&DAT_006fbb5c,iVar2);
  uVar1 = FUN_0049e630(iVar3);
  if (uVar1 == 0) {
    FUN_00450c90(param_1,iVar2,0);
  }
  return;
}


