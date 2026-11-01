
/* ==== FUN_00421940 @ 00421940 ==== 
 * signature: undefined __register FUN_00421940(char * param_1)
 * body: 00421940-00421952
 */

void FUN_00421940(char *param_1)

{
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return;
  }
  if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return;
}


