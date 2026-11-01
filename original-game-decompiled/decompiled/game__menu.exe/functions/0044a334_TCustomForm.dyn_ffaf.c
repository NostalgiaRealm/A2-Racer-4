
/* ==== TCustomForm.dyn_ffaf @ 0044a334 ==== 
 * signature: undefined4 __register TCustomForm.dyn_ffaf(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0044a334-0044a3af
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TCustomForm_dyn_ffaf(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 extraout_ECX;
  char local_d;
  undefined4 local_c;
  int local_8;
  
  local_d = '\0';
  local_c = param_2;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x2aa) != 0) {
    param_1 = (**(code **)(param_1 + 0x2a8))(*(undefined4 *)(param_1 + 0x2ac),param_2,&local_d);
    param_3 = extraout_ECX;
  }
  if (local_d == '\0') {
    piVar1 = *(int **)(local_8 + 0x230);
    if ((piVar1 != (int *)0x0) && (piVar1[0xb] != 0)) {
      param_1 = FUN_00403178(piVar1,local_c,param_3);
      if ((char)param_1 != '\0') goto LAB_0044a3a2;
    }
    param_1 = FUN_0044a2e0();
    if ((char)param_1 == '\0') {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_0044a3a4;
    }
  }
LAB_0044a3a2:
  uVar3 = (undefined3)((uint)param_1 >> 8);
  uVar2 = 1;
LAB_0044a3a4:
  return CONCAT31(uVar3,uVar2);
}


