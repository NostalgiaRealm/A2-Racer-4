
/* ==== FUN_0054e2ea @ 0054e2ea ==== 
 * signature: undefined __fastcall FUN_0054e2ea(int param_1)
 * body: 0054e2ea-0054e332
 */

void __fastcall FUN_0054e2ea(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0055a6b0();
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)*puVar1;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)puVar1[1];
  uVar2 = FUN_0054e986((char *)puVar1[2]);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_0054e986(s_false_005b70b4);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0054e986(&DAT_005b70ac);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


