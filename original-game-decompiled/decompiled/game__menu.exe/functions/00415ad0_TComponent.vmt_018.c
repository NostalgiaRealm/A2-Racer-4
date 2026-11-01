
/* ==== TComponent.vmt_018 @ 00415ad0 ==== 
 * signature: undefined __register TComponent.vmt_018(int * param_1, uint * param_2)
 * body: 00415ad0-00415b5a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_018(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *local_14;
  undefined1 local_10;
  
  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_00403fec((uint *)param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != (uint *)0x0) {
      uVar2 = FUN_00408548((char *)param_2);
      if ((char)uVar2 == '\0') {
        local_10 = 0xb;
        local_14 = param_2;
        uVar2 = FUN_0040b6d0((int)&DAT_0040e954,'\x01',(undefined4 *)PTR_PTR_004ab808,0,&local_14);
        FUN_004036f4(uVar2);
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_00415c50((int)param_1,'\0');
    FUN_00415b5c((int)param_1,param_2);
    FUN_00415c50((int)param_1,'\x01');
  }
  return;
}


