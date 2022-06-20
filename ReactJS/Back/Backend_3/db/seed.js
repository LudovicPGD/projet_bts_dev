import pkg from '@prisma/client'
const { PrismaClient } = pkg
const prisma = new PrismaClient()
const { object: Object } = prisma

async function main() {
    await Object.create({
        data: {
            name: 'Batte',
            price: '23',
            cover: 'image.jpg',
            posts: {
                create: [
                    {
                        title: 'js destrcuturation',
                    },
                    {
                        title: 'es6',
                    },
                ],
            },
        },
    })
}

main()
    .catch((error) => {
        console.log(error)
        process.exit(1)
    })
    .finally(async () => {
        await prisma.$disconnect()
    })