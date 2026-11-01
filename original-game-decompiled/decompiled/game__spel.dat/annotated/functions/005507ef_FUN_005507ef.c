
/* ==== FUN_005507ef @ 005507ef ==== 
 * signature: uint __stdcall FUN_005507ef(ushort * param_1, ushort * param_2, ushort * param_3, ushort * param_4)
 * body: 005507ef-00550831
 */

uint FUN_005507ef(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00550825;
    uVar1 = *param_1;
    uVar2 = *param_3;
    if (uVar2 >= uVar1 && uVar2 != uVar1) goto LAB_00550816;
    if (uVar2 < uVar1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00550825:
    uVar3 = (uint)(param_1 != param_2);
  }
  else {
LAB_00550816:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


