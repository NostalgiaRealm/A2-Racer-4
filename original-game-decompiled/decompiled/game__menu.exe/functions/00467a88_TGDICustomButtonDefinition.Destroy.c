
/* ==== TGDICustomButtonDefinition.Destroy @ 00467a88 ==== 
 * signature: undefined TGDICustomButtonDefinition.Destroy(void)
 * body: 00467a88-00467b0d
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGDICustomButtonDefinition_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  byte bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x467a94;
  piVar1 = FUN_004032fc(param_1,param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  FUN_0040c968(piVar1 + 0x1a);
  FUN_00467e60((int)piVar1,0x5405,0,0);
  FUN_0040c968(piVar1 + 0x14);
  bVar2 = 0;
  do {
    FUN_0040c968(piVar1 + bVar2 + 9);
    bVar2 = bVar2 + 1;
  } while (bVar2 != 7);
  FUN_0040c968(piVar1 + 0x12);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00467b15;
  pcStack_18 = (code *)0x467b0d;
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  return;
}


