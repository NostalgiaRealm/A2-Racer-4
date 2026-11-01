
/* ==== FUN_00419fa0 @ 00419fa0 ==== 
 * signature: undefined __register FUN_00419fa0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00419fa0-0041a022
 */

void FUN_00419fa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00419a50(param_1);
  }
  else if (1 < *(int *)(*(int *)(param_1 + 0x20) + 4)) {
    iVar1 = FUN_00402ce4((int *)&PTR_TMetafileImage_vmt_000_00415580,'\x01',param_3);
    pHVar2 = *(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8);
    if (pHVar2 != (HENHMETAFILE)0x0) {
      pHVar2 = CopyEnhMetaFileA(pHVar2,(LPCSTR)0x0);
      *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
    }
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
    *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20);
    FUN_0041a6f0(*(int **)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = iVar1;
    FUN_0041a6ec(iVar1);
  }
  return;
}


