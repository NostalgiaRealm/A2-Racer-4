
/* ==== FUN_00401764 @ 00401764 ==== 
 * signature: undefined __register FUN_00401764(int param_1, int param_2, undefined4 * param_3)
 * body: 00401764-004017e0
 */

void FUN_00401764(int param_1,int param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  BOOL BVar2;
  LPVOID lpAddress;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  
  pvVar4 = (LPVOID)(param_1 + 0xfffU & 0xfffff000);
  pvVar3 = (LPVOID)(param_1 + param_2 & 0xfffff000);
  *param_3 = pvVar4;
  param_3[1] = (int)pvVar3 - (int)pvVar4;
  for (puVar5 = DAT_00447450; (undefined4 **)puVar5 != &DAT_00447450; puVar5 = (undefined4 *)*puVar5
      ) {
    pvVar1 = (LPVOID)puVar5[2];
    lpAddress = pvVar1;
    if (pvVar1 < pvVar4) {
      lpAddress = pvVar4;
    }
    pvVar6 = (LPVOID)(puVar5[3] + (int)pvVar1);
    if (pvVar3 < (LPVOID)(puVar5[3] + (int)pvVar1)) {
      pvVar6 = pvVar3;
    }
    if (lpAddress < pvVar6) {
      BVar2 = VirtualFree(lpAddress,(int)pvVar6 - (int)lpAddress,0x4000);
      if (BVar2 == 0) {
        DAT_0044742c = 2;
      }
    }
  }
  return;
}


