
/* ==== FUN_0040a4f0 @ 0040a4f0 ==== 
 * signature: undefined __cdecl FUN_0040a4f0(int param_1, int param_2)
 * body: 0040a4f0-0040a562
 */

void __cdecl FUN_0040a4f0(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_8;
  int local_4;
  
  bVar1 = calc_start_and_end_chunk(param_1,param_2,&local_8,&param_2,&local_4,&param_1);
  if (local_8 < param_2) {
    do {
      FUN_0040a950(local_8);
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  if ((CONCAT31(extraout_var,bVar1) != 0) && (iVar2 = local_4, local_4 < param_1)) {
    do {
      FUN_0040a950(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return;
}


