
/* ==== FUN_004f5aa0 @ 004f5aa0 ==== 
 * signature: undefined4 * __cdecl FUN_004f5aa0(int param_1, int param_2)
 * body: 004f5aa0-004f5acc
 */

undefined4 * __cdecl FUN_004f5aa0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_1 * param_2;
  puVar1 = _malloc(uVar3);
  puVar4 = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return puVar1;
}


