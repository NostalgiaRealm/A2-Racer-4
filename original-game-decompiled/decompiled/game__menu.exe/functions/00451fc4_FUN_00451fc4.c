
/* ==== FUN_00451fc4 @ 00451fc4 ==== 
 * signature: undefined __register FUN_00451fc4(int param_1, int param_2, undefined * param_3)
 * body: 00451fc4-004520f6
 */

void FUN_00451fc4(int param_1,int param_2,undefined *param_3)

{
  HMODULE pHVar1;
  HMODULE hModule;
  HRSRC hResInfo;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar4;
  LPCSTR lpName;
  code *pcStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  byte *local_118;
  byte *local_114;
  undefined *local_110;
  undefined1 local_10c;
  char local_108 [256];
  undefined *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = (byte *)0x0;
  local_114 = (byte *)0x0;
  pcStack_12c = thunk_FUN_004036bc;
  pcStack_130 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_130;
  local_8 = param_3;
  FUN_00408c0c(local_108,param_3,0xff);
  hModule = (HMODULE)FUN_004052c0(param_2);
  lpName = local_108;
  hResInfo = FindResourceA(hModule,lpName,(LPCSTR)0xa);
  pHVar1 = DAT_004ac4dc;
  if (hResInfo == (HRSRC)0x0) {
    lpName = local_108;
    hResInfo = FindResourceA(DAT_004ac4dc,lpName,(LPCSTR)0xa);
    hModule = pHVar1;
    if (hResInfo == (HRSRC)0x0) {
      local_110 = local_8;
      local_10c = 0xb;
      ppuVar4 = &local_110;
      lpName = (LPCSTR)0x0;
      FUN_00451dbc(DAT_004ac85c,3,(int *)&local_114);
      uVar2 = FUN_0040b614((int)&DAT_00451ca0,'\x01',local_114,lpName,ppuVar4);
      FUN_004036f4(uVar2);
    }
  }
  pvVar3 = LoadResource(hModule,hResInfo);
  *(HGLOBAL *)(param_1 + 8) = pvVar3;
  if (*(int *)(param_1 + 8) == 0) {
    local_110 = local_8;
    local_10c = 0xb;
    ppuVar4 = &local_110;
    uVar2 = 0;
    FUN_00451dbc(DAT_004ac85c,4,(int *)&local_118);
    uVar2 = FUN_0040b614((int)&DAT_00451ca0,'\x01',local_118,uVar2,ppuVar4);
    FUN_004036f4(uVar2);
  }
  *in_FS_OFFSET = lpName;
  pcStack_130 = FUN_004520fe;
  FUN_00403c80((int *)&local_118,2);
  return;
}


