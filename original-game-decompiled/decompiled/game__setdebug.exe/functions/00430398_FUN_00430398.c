
/* ==== FUN_00430398 @ 00430398 ==== 
 * signature: undefined __register FUN_00430398(int * param_1, int * param_2, int * param_3)
 * body: 00430398-00430429
 */

void FUN_00430398(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x4303b3;
  piVar1 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',param_3);
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_2c = (code *)0x4303d0;
  puStack_20 = &stack0xfffffffc;
  piVar2 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX);
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  pcStack_2c = (code *)&stack0xfffffffc;
  FUN_00430130(param_1);
  hbmMask = (HBITMAP)FUN_00430274((int)param_1,param_3,piVar2);
  hbmImage = (HBITMAP)FUN_00430274((int)param_1,param_2,piVar1);
  ImageList_Add((HIMAGELIST)param_1[0xc],hbmImage,hbmMask);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_00430431;
  pcStack_30 = (code *)0x430429;
  FUN_00402d14(piVar2);
  return;
}


