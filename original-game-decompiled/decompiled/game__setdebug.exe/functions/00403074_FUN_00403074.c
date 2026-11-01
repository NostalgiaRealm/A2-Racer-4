
/* ==== FUN_00403074 @ 00403074 ==== 
 * signature: int * __register FUN_00403074(int * param_1, char param_2)
 * body: 00403074-00403082
 */

int * FUN_00403074(int *param_1,char param_2)

{
  if (param_2 < '\x01') {
    return param_1;
  }
  (**(code **)(*param_1 + -0x18))();
  return param_1;
}


