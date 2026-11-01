
/* ==== FUN_004ced80 @ 004ced80 ==== 
 * signature: undefined __cdecl FUN_004ced80(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * body: 004ced80-004cee34
 */

void __cdecl FUN_004ced80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (DAT_0074b31c != (code *)0x0) {
    if (DAT_00740dec == 0) {
      FUN_004c3fa0((byte *)s__s__d____cd_rom_handlers_require_005b6dd8);
      return;
    }
    if ((((param_3 == 0x8000) || (param_3 == 0x8004)) && (*(int *)(param_4 + 4) == 2)) &&
       (uVar1 = FUN_00559576((void *)(uint)DAT_00740dec,(uint)DAT_00740dec),
       (*(uint *)(param_4 + 0xc) & 1 << ((char)uVar1 + 0xbfU & 0x1f)) != 0)) {
      (*DAT_0074b31c)(param_3 != 0x8000);
      FUN_004c3fa0((byte *)s__s__d____Game_CD_ROM_was__s_in_d_005b6d98);
    }
  }
  return;
}


