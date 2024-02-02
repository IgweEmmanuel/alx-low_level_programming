/**
 * hash_djb2 - This hashes array of characters
 * @*str: These are the characters to hash
 *
 * Return: This returns the hashed string called hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
