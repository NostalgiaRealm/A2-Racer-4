
/* ==== TBitmap.vmt_058 @ 0041b9d8 ==== 
 * signature: undefined __register TBitmap.vmt_058(int * param_1, short param_2, HBITMAP param_3, HPALETTE param_4)
 * body: 0041b9d8-0041ba5b
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
    FUN_004176f0((undefined4 *)PTR_PTR_00446c88);
  }
  FUN_0041b8a0((int)param_1);
  FUN_00402a2c(local_58,0x54,0);
  GetObjectA(param_3,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_0041b320((int)param_1,param_3,param_4,local_58);
  *(undefined1 *)(param_1[8] + 0x70) = 0;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


