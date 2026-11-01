
/* ==== TControl.vmt_06c @ 0042584c ==== 
 * signature: undefined __register TControl.vmt_06c(int * param_1, uint * param_2, undefined4 param_3)
 * body: 0042584c-00425963
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_06c(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if ((*param_2 < 0x100) || (0x108 < *param_2)) {
      uVar1 = *param_2;
      if ((uVar1 < 0x200) || (0x20a < uVar1)) {
        if (uVar1 == 0xb00b) {
          FUN_004243f4((int)param_1,0xb00b,param_2[1],param_2[2]);
        }
      }
      else {
        if (((*(byte *)(param_1 + 0x10) & 0x80) == 0) &&
           (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
          *param_2 = *param_2 - 2;
        }
        uVar1 = *param_2;
        if (uVar1 == 0x200) {
          FUN_00442b2c(*(int *)PTR_DAT_00446c80,param_1,(int)param_2);
        }
        else {
          if (uVar1 != 0x201) {
            if (uVar1 == 0x202) {
              *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
              goto LAB_00425957;
            }
            if (uVar1 != 0x203) goto LAB_00425957;
          }
          if (*(char *)((int)param_1 + 0x4d) == '\x01') {
            FUN_00402ef0(param_1,param_2,param_3);
            return;
          }
          *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 1;
        }
      }
      goto LAB_00425957;
    }
    piVar3 = FUN_00439eb4(param_1);
    if (piVar3 == (int *)0x0) goto LAB_00425957;
    cVar2 = (**(code **)(*piVar3 + 0xdc))(piVar3,param_1,param_2);
  }
  else {
    piVar3 = FUN_00439eb4(param_1);
    if ((piVar3 == (int *)0x0) || (piVar3[0x8e] == 0)) goto LAB_00425957;
    cVar2 = (**(code **)(*(int *)piVar3[0x8e] + 0x24))((int *)piVar3[0x8e],param_1,param_2);
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_00425957:
  (**(code **)(*param_1 + -0x14))(param_1,param_2);
  return;
}


