
/* ==== FUN_00474080 @ 00474080 ==== 
 * signature: undefined __cdecl FUN_00474080(int * param_1, int param_2)
 * body: 00474080-004740b3
 */

void __cdecl FUN_00474080(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*param_1 * 0xf0 + 200 + DAT_00715e50);
  puVar2 = *(undefined4 **)(param_2 + 0x10);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  return;
}


