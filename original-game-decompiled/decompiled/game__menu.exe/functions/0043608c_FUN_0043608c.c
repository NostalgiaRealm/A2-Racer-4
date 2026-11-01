
/* ==== FUN_0043608c @ 0043608c ==== 
 * signature: undefined __register FUN_0043608c(int param_1)
 * body: 0043608c-0043614b;00436153-00436157
 */

void FUN_0043608c(int param_1)

{
  UINT flags;
  int cx;
  HICON pHVar1;
  undefined4 *in_FS_OFFSET;
  int cy;
  undefined4 uVar2;
  int cInitial;
  int cGrow;
  POINT local_10;
  HIMAGELIST local_8;
  
  if (*(short *)(param_1 + 0x60) != -1) {
    cGrow = 1;
    cInitial = 0xe;
    flags = (**(code **)PTR_DAT_004ab760)();
    cy = 0xd;
    cx = (**(code **)PTR_DAT_004ab760)();
    local_8 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd8;
    pHVar1 = (HICON)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)*(short *)(param_1 + 0x60));
    FUN_00420314(local_8,pHVar1);
    pHVar1 = (HICON)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)*(short *)(param_1 + 0x60));
    FUN_00420314(local_8,pHVar1);
    ImageList_SetDragCursorImage(local_8,0,0,0);
    ImageList_GetDragImage((POINT *)0x0,&local_10);
    ImageList_SetDragCursorImage(local_8,1,local_10.x,local_10.y);
    *in_FS_OFFSET = uVar2;
    ImageList_Destroy(local_8);
    return;
  }
  return;
}


