
/* ==== TMemoryStream.vmt_010 @ 00412a88 ==== 
 * signature: LPCVOID __register TMemoryStream.vmt_010(int param_1, SIZE_T * param_2)
 * body: 00412a88-00412b09
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

LPCVOID TMemoryStream_vmt_010(int param_1,SIZE_T *param_2)

{
  int *piVar1;
  LPCVOID pvVar2;
  LPCVOID extraout_ECX;
  
  if (0 < (int)*param_2) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  pvVar2 = *(LPCVOID *)(param_1 + 4);
  if (*param_2 != *(SIZE_T *)(param_1 + 0x10)) {
    if (*param_2 == 0) {
      FUN_004070c8(pvVar2);
      pvVar2 = (LPCVOID)0x0;
    }
    else {
      if (*(SIZE_T *)(param_1 + 0x10) == 0) {
        pvVar2 = (LPCVOID)FUN_0040709c((uint)*(ushort *)PTR_DAT_004ab948,*param_2);
      }
      else {
        pvVar2 = (LPCVOID)FUN_004070ac(pvVar2,*param_2,(uint)*(ushort *)PTR_DAT_004ab948);
      }
      if (pvVar2 == (LPCVOID)0x0) {
        piVar1 = FUN_0040b694((int *)&DAT_0040e574,'\x01',(undefined4 *)PTR_PTR_004ab9bc);
        FUN_004036f4(piVar1);
        pvVar2 = extraout_ECX;
      }
    }
  }
  return pvVar2;
}


