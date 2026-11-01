
/* ==== FUN_004032fc @ 004032fc ==== 
 * signature: int * __register FUN_004032fc(int * param_1, char param_2)
 * body: 004032fc-0040330a
 */

int * FUN_004032fc(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}


