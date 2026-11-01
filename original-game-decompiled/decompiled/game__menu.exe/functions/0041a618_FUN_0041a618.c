
/* ==== FUN_0041a618 @ 0041a618 ==== 
 * signature: ushort __register FUN_0041a618(ushort * param_1)
 * body: 0041a618-0041a62d
 */

ushort FUN_0041a618(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 10;
  for (; (int)param_1 < (int)puVar1; param_1 = param_1 + 1) {
    uVar2 = uVar2 ^ *param_1;
  }
  return uVar2;
}


