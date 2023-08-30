/**
 * set_string - Set the value of a pointer to a char
 * @s: Double pointer to a char
 * @to: Pointer to a char
 *
 * Description: This function updates the value of the pointer @s to point
 * to the same memory location as the pointer @to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
