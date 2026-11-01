
/* ==== FUN_004821f0 @ 004821f0 ==== 
 * signature: undefined __register FUN_004821f0(int * param_1, int param_2, int param_3, char param_4)
 * body: 004821f0-00482367
 */

void FUN_004821f0(int *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  char local_10;
  undefined1 local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_12c = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = (int *)0x0;
  pcStack_140 = thunk_FUN_004036bc;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  local_20 = *(undefined4 *)(param_2 + 0x24);
  local_1c = 0xb;
  local_14 = 0;
  local_10 = param_4;
  local_c = 1;
  local_18 = param_3;
  FUN_00402ee4(*param_1,local_128);
  FUN_00403e80(&local_28,local_128);
  pcVar3 = "PlayWave";
  FUN_00403f9c(&local_24,3);
  iVar2 = local_24;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar2,0,(int)pcVar3);
  FUN_00482770((int)param_1,extraout_EDX,extraout_ECX);
  if (*PTR_DAT_004ab5d8 != '\0') {
    FUN_0046bd3c(param_2,(int *)&local_8);
    if (local_8 != (int *)0x0) {
      FUN_0046bdc4(param_2,local_8);
      FUN_00480fcc(param_3);
      (**(code **)(*local_8 + 0x3c))();
      iVar2 = FUN_00481c68((int *)&DAT_00481c3c,'\x01',local_8);
      FUN_004085ac(iVar2,&local_12c);
      FUN_00403f9c((int *)(iVar2 + 8),3);
      FUN_00410104((int *)param_1[7],iVar2);
      (**(code **)(*local_8 + 0x30))();
      if (param_4 != '\0') {
        FUN_00482a08((int)param_1,iVar2);
      }
      param_1[2] = iVar2;
    }
  }
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403c5c(&local_12c);
  FUN_00403c80(&local_28,2);
  FUN_00405860((int *)&local_8);
  return;
}


