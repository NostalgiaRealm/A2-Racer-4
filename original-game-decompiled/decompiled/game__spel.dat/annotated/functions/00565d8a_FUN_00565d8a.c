
/* ==== FUN_00565d8a @ 00565d8a ==== 
 * signature: undefined __cdecl FUN_00565d8a(uint param_1, int * param_2, ushort * param_3)
 * body: 00565d8a-00565e59
 */

void __cdecl FUN_00565d8a(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_00565dcf:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_00565dcf;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_00565e25;
    }
    if (iVar2 != 8) goto LAB_00565e25;
    uVar3 = 0x10;
  }
  bVar1 = FUN_0055f65e(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_0055f3ab(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_00565e25:
  FUN_0055fae8();
  if (((*param_2 != 8) && (DAT_005c94c0 == 0)) && (iVar2 = FUN_00564aa0(), iVar2 != 0)) {
    return;
  }
  FUN_0055f8fd(*param_2);
  return;
}


