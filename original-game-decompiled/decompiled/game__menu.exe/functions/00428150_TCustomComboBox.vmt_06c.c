
/* ==== TCustomComboBox.vmt_06c @ 00428150 ==== 
 * signature: undefined TCustomComboBox.vmt_06c(void)
 * body: 00428150-00428295
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomComboBox_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  bool bVar1;
  COLORREF CVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
     ((((*param_2 == 0x201 || (*param_2 == 0x203)) &&
       (bVar1 = FUN_0042ee88((int)param_1), param_3 = extraout_ECX, !bVar1)) &&
      (*(char *)((int)param_1 + 0x4d) == '\x01')))) {
    bVar1 = FUN_00432158(param_1,param_2);
    if (bVar1) {
      return;
    }
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  uVar3 = *param_2;
  if (uVar3 == 5) {
    if ((char)param_1[0x8b] != '\0') {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  else if (uVar3 == 0x102) {
    uVar3 = FUN_004337ec(param_1,(int)param_2,param_3);
    if ((char)uVar3 != '\0') {
      return;
    }
    if ((((short)param_2[1] == 0xd) || (param_3 = extraout_ECX_00, (short)param_2[1] == 0x1b)) &&
       (bVar1 = FUN_0042789c(param_1), param_3 = extraout_ECX_01, bVar1)) {
      FUN_004278c0(param_1,0);
      return;
    }
  }
  else {
    if (uVar3 - 0x132 < 7) {
      CVar2 = FUN_00417d54(*(uint *)(param_1[0x16] + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      uVar3 = TBrush_get_Color(param_1[0x4c]);
      CVar2 = FUN_00417d54(uVar3);
      SetBkColor((HDC)param_2[1],CVar2);
      uVar3 = FUN_00418a18(param_1[0x4c]);
      param_2[3] = uVar3;
      return;
    }
    if (((uVar3 - 0xbd32 < 7) && (*PTR_DAT_004ab7d4 == '\0')) &&
       (*(byte *)((int)param_1 + 0x1fa) < 2)) {
      uVar3 = FUN_00418a18(*(int *)(param_1[9] + 0x130));
      param_2[3] = uVar3;
      return;
    }
  }
  TWinControl_vmt_06c(param_1,param_2,param_3);
  return;
}


