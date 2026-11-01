
/* ==== FUN_0041c7a8 @ 0041c7a8 ==== 
 * signature: undefined __register FUN_0041c7a8(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041c7a8-0041c82a
 */

void FUN_0041c7a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  else if (1 < *(int *)(*(int *)(param_1 + 0x20) + 4)) {
    iVar1 = FUN_00402f6c((int *)&PTR_TMetafileImage_vmt_000_004171d4,'\x01',param_3);
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
    FUN_0041cf14(*(int **)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = iVar1;
    FUN_0041cf10(iVar1);
  }
  return;
}


