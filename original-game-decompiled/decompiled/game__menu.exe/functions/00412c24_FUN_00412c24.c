
/* ==== FUN_00412c24 @ 00412c24 ==== 
 * signature: undefined __register FUN_00412c24(int param_1, HMODULE param_2, LPCSTR param_3, LPCSTR param_4)
 * body: 00412c24-00412c8f
 */

void FUN_00412c24(int param_1,HMODULE param_2,LPCSTR param_3,LPCSTR param_4)

{
  HRSRC pHVar1;
  HGLOBAL pvVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  
  pHVar1 = FindResourceA(param_2,param_3,param_4);
  *(HRSRC *)(param_1 + 0x10) = pHVar1;
  if (pHVar1 == (HRSRC)0x0) {
    FUN_00412bb4();
  }
  pvVar2 = LoadResource(param_2,*(HRSRC *)(param_1 + 0x10));
  *(HGLOBAL *)(param_1 + 0x14) = pvVar2;
  if (pvVar2 == (HGLOBAL)0x0) {
    FUN_00412bb4();
  }
  DVar3 = SizeofResource(param_2,*(HRSRC *)(param_1 + 0x10));
  pvVar4 = LockResource(*(HGLOBAL *)(param_1 + 0x14));
  FUN_0041298c(param_1,pvVar4,DVar3);
  return;
}


