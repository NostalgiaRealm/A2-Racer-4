
/* ==== FUN_0041314c @ 0041314c ==== 
 * signature: undefined __register FUN_0041314c(int param_1, int param_2)
 * body: 0041314c-004131c8;004131e0-004131f5
 */

void FUN_0041314c(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  code *pcStack_20;
  code *pcStack_1c;
  byte *local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  pcStack_20 = thunk_FUN_00403434;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  pcStack_2c = thunk_FUN_00403180;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  uVar2 = FUN_00413310(param_1,param_2,0);
  if ((char)uVar2 != '\v') {
    FUN_00411700();
  }
  iVar3 = FUN_0040ce08(param_2);
  pcVar1 = (char *)**(undefined4 **)(iVar3 + 1);
  uVar2 = extraout_ECX;
  while (FUN_0041322c(local_8,(int *)&local_c,uVar2), local_c != (byte *)0x0) {
    FUN_00411718(pcVar1,local_c);
    uVar2 = extraout_ECX_00;
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  pcStack_1c = FUN_004131fd;
  pcStack_20 = (code *)0x4131f5;
  FUN_004039b8((int *)&local_c);
  return;
}


