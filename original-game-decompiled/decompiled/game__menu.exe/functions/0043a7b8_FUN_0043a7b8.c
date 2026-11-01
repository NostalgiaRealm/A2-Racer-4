
/* ==== FUN_0043a7b8 @ 0043a7b8 ==== 
 * signature: undefined __register FUN_0043a7b8(int * param_1, int * param_2, int param_3)
 * body: 0043a7b8-0043a878;0043a880-0043a8b6
 */

void FUN_0043a7b8(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  
  pcStack_20 = (code *)0x43a7d3;
  piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)((int)param_1 + 0x35) != '\0') && (param_3 != -1)) {
    pcStack_20 = (code *)&stack0xfffffffc;
    piVar2 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_0041ee30(piVar2,param_3);
    FUN_0043a3ec(param_1);
    iVar3 = (**(code **)(*piVar2 + 100))();
    pHVar4 = (HBITMAP)FUN_0043a5a8((int)param_1,iVar3);
    pHVar5 = (HBITMAP)FUN_0043a5c8((int)param_1,param_2,piVar1);
    ImageList_Add((HIMAGELIST)param_1[0xc],pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00402f9c(piVar2);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  pcStack_20 = (code *)&stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_0043a5c8((int)param_1,param_2,piVar1);
  himl = (HIMAGELIST)FUN_0043a5b8(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0043a8be;
  pcStack_24 = (code *)0x43a8b6;
  FUN_00402f9c(piVar1);
  return;
}


