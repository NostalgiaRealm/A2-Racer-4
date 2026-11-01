
/* ==== FUN_0055213d @ 0055213d ==== 
 * signature: undefined __fastcall FUN_0055213d(int param_1)
 * body: 0055213d-00552199
 */

void __fastcall FUN_0055213d(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  puVar1 = (undefined4 *)FUN_0055a6b0();
  uVar2 = FUN_0054ef7c((int)*(char *)*puVar1);
  *(short *)(param_1 + 0xc) = (short)uVar2;
  uVar2 = FUN_0054ef7c((int)*(char *)puVar1[1]);
  *(short *)(param_1 + 0xe) = (short)uVar2;
  uVar3 = FUN_0054e986((char *)puVar1[2]);
  *(undefined4 *)(param_1 + 8) = uVar3;
  puVar4 = FUN_0055466a(s_false_005b70b4);
  *(undefined2 **)(param_1 + 0x10) = puVar4;
  puVar4 = FUN_0055466a(&DAT_005b70ac);
  *(undefined2 **)(param_1 + 0x14) = puVar4;
  return;
}


