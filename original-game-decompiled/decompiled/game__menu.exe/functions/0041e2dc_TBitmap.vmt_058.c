
/* ==== TBitmap.vmt_058 @ 0041e2dc ==== 
 * signature: undefined __register TBitmap.vmt_058(int * param_1, short param_2, HBITMAP param_3, HPALETTE param_4)
 * body: 0041e2dc-0041e35f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_058(int *param_1,short param_2,HBITMAP param_3,HPALETTE param_4)

{
  int iVar1;
  undefined4 local_58 [5];
  int local_44;
  undefined4 local_40;
  
  if ((param_2 != 2) || (param_3 == (HBITMAP)0x0)) {
    FUN_00419798((undefined4 *)PTR_PTR_004ab8c0);
  }
  FUN_0041e0c4((int)param_1);
  FUN_00402c30(local_58,0x54,0);
  GetObjectA(param_3,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_0041db44((int)param_1,param_3,param_4,local_58);
  *(undefined1 *)(param_1[8] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


