
/* ==== __break @ 0055e1bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055e1bd-0055e1bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


