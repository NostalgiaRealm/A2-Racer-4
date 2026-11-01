
/* ==== TWinControl.dyn_ffd6 @ 00433d0c ==== 
 * signature: undefined1 __register TWinControl.dyn_ffd6(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00433d0c-00433d6c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined1 TWinControl_dyn_ffd6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10;
  
  uVar1 = TControl_dyn_ffd6(param_1,param_2,param_3);
  local_10._0_2_ = CONCAT11(uVar1,(char)param_2);
  local_10 = (uint)(ushort)local_10;
  if (*(char *)((int)param_1 + 0x47) != '\0') {
    iVar3 = FUN_004317bc((int)param_1);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        if (((byte)local_10 & local_10._1_1_) != 0) break;
        piVar4 = (int *)FUN_00431780((int)param_1,iVar3);
        bVar2 = FUN_00403178(piVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),(byte)local_10),
                             extraout_ECX);
        local_10._0_2_ = CONCAT11(bVar2 | local_10._1_1_,(byte)local_10);
        local_10 = (uint)(ushort)local_10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return local_10._1_1_;
}


