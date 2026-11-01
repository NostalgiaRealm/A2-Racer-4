
/* ==== TDragImageList.vmt_038 @ 004361b8 ==== 
 * signature: undefined TDragImageList.vmt_038(void)
 * body: 004361b8-004361e2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDragImageList_vmt_038(int param_1,POINT *param_2)

{
  bool bVar1;
  
  TCustomImageList_vmt_038(param_1,&param_2->x);
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    ImageList_GetDragImage((POINT *)0x0,param_2);
  }
  return;
}


