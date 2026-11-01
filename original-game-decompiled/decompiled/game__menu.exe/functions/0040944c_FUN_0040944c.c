
/* ==== FUN_0040944c @ 0040944c ==== 
 * signature: undefined __register FUN_0040944c(ushort param_1, ushort param_2, ushort param_3, ushort param_4)
 * body: 0040944c-004094b0
 */

void FUN_0040944c(ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 *local_10;
  double local_c;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = FUN_004093dc(param_1,param_2,param_3,&local_c,param_4);
  if (cVar1 == '\0') {
    FUN_00405808((undefined4 *)PTR_PTR_004ab804,(int *)&local_10);
    FUN_004080f4(local_10);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004094b8;
  pcStack_24 = (code *)0x4094b0;
  FUN_00403c5c((int *)&local_10);
  return;
}


