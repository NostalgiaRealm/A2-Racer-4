
/* ==== FUN_00409624 @ 00409624 ==== 
 * signature: undefined __register FUN_00409624(uint param_1, ushort param_2, ushort param_3)
 * body: 00409624-00409683
 */

void FUN_00409624(uint param_1,ushort param_2,ushort param_3)

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
  cVar1 = FUN_0040955c(param_1,param_2,param_3,&local_c);
  if (cVar1 == '\0') {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8d8,(int *)&local_10);
    FUN_004080f4(local_10);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0040968b;
  pcStack_24 = (code *)0x409683;
  FUN_00403c5c((int *)&local_10);
  return;
}


